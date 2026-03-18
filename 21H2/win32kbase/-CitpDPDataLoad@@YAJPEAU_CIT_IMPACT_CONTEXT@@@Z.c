/*
 * XREFs of ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A51C4
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00A2FE8 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C00A3AFC (-CitpStart@@YAJXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C023F0CC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0017404 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C00A5444 (-Citp100NSToMS@@YAI_K@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall CitpDPDataLoad(struct _CIT_IMPACT_CONTEXT *a1)
{
  void *v1; // r14
  _OWORD *v2; // rdi
  int v3; // r15d
  unsigned int v5; // ebx
  __int128 v6; // xmm1
  int v7; // r9d
  int v8; // edx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *v14; // rdi
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-A8h]
  _OWORD v26[15]; // [rsp+5Ch] [rbp-A4h] BYREF

  v1 = (void *)*((_QWORD *)a1 + 73);
  v2 = (_OWORD *)((char *)a1 + 592);
  v3 = *((_DWORD *)a1 + 84);
  DestinationString = 0LL;
  memset((char *)a1 + 592, 0, 0xE8uLL);
  v5 = 0;
  if ( v1 )
  {
    memset(v26, 0, 0xE8uLL);
    RtlInitUnicodeString(&DestinationString, L"DP");
    ResultLength = 244;
    if ( ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0xF4u, &ResultLength) < 0
      || v25 < 0x28
      || LOWORD(v26[0]) != 210
      || WORD1(v26[0]) > 0xE8u
      || HIDWORD(v26[0]) != v3 )
    {
      memset(v26, 0, 0xE8uLL);
      LOWORD(v26[0]) = 210;
      *((_QWORD *)&v26[1] + 1) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)&v26[2] = MEMORY[0xFFFFF78000000014];
    }
    WORD1(v26[0]) = 232;
    if ( MEMORY[0xFFFFF78000000014] > *((_QWORD *)&v26[1] + 1) )
      Citp100NSToMS(MEMORY[0xFFFFF78000000014] - *((_QWORD *)&v26[1] + 1));
    CitpStatIncrement((unsigned __int16 *)v26 + 4, 1);
    v6 = v26[1];
    v8 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v7;
    *v2 = v26[0];
    *((_DWORD *)a1 + 206) = v8;
    v9 = v26[2];
    v2[1] = v6;
    v10 = v26[3];
    v2[2] = v9;
    v11 = v26[4];
    v2[3] = v10;
    v12 = v26[5];
    v2[4] = v11;
    v13 = v26[6];
    v2[5] = v12;
    v2[6] = v13;
    v14 = v2 + 8;
    *(v14 - 1) = v26[7];
    v15 = v26[9];
    *v14 = v26[8];
    v16 = v26[10];
    v14[1] = v15;
    v17 = v26[11];
    v14[2] = v16;
    v18 = v26[12];
    v14[3] = v17;
    v19 = v26[13];
    v20 = *(_QWORD *)&v26[14];
    v14[4] = v18;
    v14[5] = v19;
    *((_QWORD *)v14 + 12) = v20;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
