/*
 * XREFs of HalpIommuConfigureInterrupt @ 0x1403A4968
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A8DA7C (HalpIommuInitializeAll.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402A9460 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 *     HalpInterruptGenerateMessage @ 0x1403799C4 (HalpInterruptGenerateMessage.c)
 *     HalpInterruptIsMsiSupported @ 0x14037D4DC (HalpInterruptIsMsiSupported.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpIommuSetupMessageInterruptRouting @ 0x140A8DD50 (HalpIommuSetupMessageInterruptRouting.c)
 */

__int64 __fastcall HalpIommuConfigureInterrupt(__int64 a1, int a2, __int128 *a3)
{
  __int128 v6; // xmm0
  int Message; // ebx
  int v8; // eax
  __int64 result; // rax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+38h] [rbp-61h]
  int v14; // [rsp+3Ch] [rbp-5Dh]
  __int128 *v15; // [rsp+40h] [rbp-59h]
  __int128 v16; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v17[12]; // [rsp+60h] [rbp-39h] BYREF

  v14 = 0;
  v12 = 6LL;
  v16 = 0LL;
  memset(v17, 0, 0x58uLL);
  v6 = *a3;
  HIDWORD(v17[0]) = 206;
  LOBYTE(v17[1]) = 12;
  LODWORD(v17[5]) = a2 & 0x3FFFFFFF | v17[5] & 0xC0000000 | 0x40000000;
  *(_OWORD *)&v17[3] = v6;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)a3);
  v15 = &v16;
  Message = -1073741637;
  LODWORD(v16) = a2 & 0x3FFFFFFF;
  if ( (*(_DWORD *)(a1 + 488) & 2) == 0 || !HalpInterruptIsMsiSupported(1) )
    return (unsigned int)Message;
  v8 = *(_DWORD *)(a1 + 392);
  if ( (v8 & 1) == 0 )
  {
    if ( a2 == 1073741822 )
    {
      Message = HalpInterruptGenerateMessage((__int64)&v12, (__int64)v17, (_QWORD *)(a1 + 512), (_QWORD *)(a1 + 520));
      if ( Message >= 0 )
      {
LABEL_6:
        *(_DWORD *)(a1 + 392) |= 1u;
        goto LABEL_7;
      }
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 504);
      v11 = *(_DWORD *)(a1 + 500);
      HIDWORD(v17[1]) = 0;
      LODWORD(v17[0]) = 3;
      LODWORD(v17[2]) = 1;
      Message = HalpInterruptRemap(v11, v10, 0LL, 0, (unsigned int *)v17, 1u);
      if ( Message >= 0 )
      {
        *(_DWORD *)(a1 + 516) = HIDWORD(v17[5]);
        *(_DWORD *)(a1 + 512) = v17[6];
        *(_QWORD *)(a1 + 520) = HIDWORD(v17[6]);
        goto LABEL_6;
      }
    }
    return (unsigned int)Message;
  }
  if ( (v8 & 2) == 0 )
    return (unsigned int)Message;
LABEL_7:
  result = HalpIommuSetupMessageInterruptRouting(a1);
  if ( (int)result >= 0 )
    *(_DWORD *)(a1 + 392) |= 2u;
  return result;
}
