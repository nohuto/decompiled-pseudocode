/*
 * XREFs of SmKmStoreTerminateWorker @ 0x1405C9740
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     SmEtwEnabled @ 0x14035911C (SmEtwEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x140415A30 (ZwSetSystemInformation.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x1405C8DF4 (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x1405C8F6C (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x1405CB888 (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(char *P)
{
  unsigned int v2; // ebx
  __int64 v3; // r12
  unsigned int v4; // edx
  int v5; // r10d
  struct _EX_RUNDOWN_REF *v6; // rax
  ULONG UserDataCount; // ebx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rsi
  _BYTE *v9; // r15
  REGHANDLE *v10; // r14
  __int64 v11; // rbx
  struct _EX_RUNDOWN_REF *v12; // rax
  int v13; // eax
  const wchar_t *v14; // rax
  ULONG Size; // [rsp+48h] [rbp-C0h]
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20[2]; // [rsp+70h] [rbp-98h] BYREF
  int v21; // [rsp+80h] [rbp-88h]
  int v22; // [rsp+84h] [rbp-84h]
  int v23; // [rsp+88h] [rbp-80h]
  int v24; // [rsp+8Ch] [rbp-7Ch]
  int v25; // [rsp+90h] [rbp-78h]
  const wchar_t *v26; // [rsp+98h] [rbp-70h]
  int v27; // [rsp+A0h] [rbp-68h]
  int v28; // [rsp+A8h] [rbp-60h]
  _DWORD v29[20]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v30[284]; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31[6]; // [rsp+578h] [rbp+470h] BYREF

  memset(v30, 0, 0x468uLL);
  v19 = 0LL;
  memset(v31, 0, sizeof(v31));
  memset(v29, 0, 0x44uLL);
  v18 = 68LL;
  v17 = (__int64 *)v29;
  v16 = 0x800000001LL;
  v29[0] = 1;
  if ( (int)ZwQuerySystemInformation(109LL, (__int64)&v16) >= 0
    && (v17 = (__int64 *)v30, v2 = 0, v16 = 0xD00000001LL, LODWORD(v18) = 1128, v30[0] = 259, (v29[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v3 = v2;
      v30[1] = v29[v2 + 1];
      if ( (int)ZwQuerySystemInformation(109LL, (__int64)&v16) >= 0 )
      {
        v4 = 0;
        if ( v30[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= BYTE1(v29[0]) )
        goto LABEL_10;
    }
    v5 = v30[24];
    while ( !_bittest(&v5, v4) != *((_DWORD *)P + 13) || v30[v4 + 8] != *((_DWORD *)P + 12) )
    {
      if ( ++v4 >= v30[4] )
        goto LABEL_9;
    }
    UserDataCount = 0;
    UserData = v31;
    v20[1] = (__int64)v30;
    v20[0] = (__int64)v31;
    v22 = 6;
    v24 = 1036;
    v9 = P + 56;
    v10 = (REGHANDLE *)SmEtwEnabled(2);
    if ( v10 )
    {
      if ( P != (char *)-56LL )
        LOBYTE(v30[0]) = *v9;
      v31[0].Ptr = (ULONGLONG)v30;
      *(_QWORD *)&v31[0].Size = 1LL;
      if ( P != (char *)-60LL )
        *(_DWORD *)((char *)v30 + 1) = *((_DWORD *)P + 15);
      v31[1].Ptr = (ULONGLONG)v30 + 1;
      *(_QWORD *)&v31[1].Size = 4LL;
      v11 = *((_QWORD *)P + 5);
      v21 = 2;
      v23 = 5;
      SmKmEtwAppendProductName(v20, v11);
      SmKmEtwAppendObjectName((__int64)v20, *(_QWORD *)(v11 + 8));
      UserDataCount = v21;
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)v20[0];
    }
    v12 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection_0(v12 + 1);
    v16 = 0xA00000001LL;
    v17 = &v19;
    v13 = v29[v3 + 1];
    LODWORD(v19) = 1;
    LODWORD(v18) = 8;
    HIDWORD(v19) = v13;
    if ( (int)ZwSetSystemInformation(109LL, (__int64)&v16) >= 0 )
    {
      if ( v10 )
      {
        EtwWriteEx(*v10, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
        if ( !*(_DWORD *)v9 )
        {
          Size = UserData[3].Size;
          memmove(v30, (const void *)UserData[3].Ptr, Size);
          v25 = 2;
          v27 = 1;
          *((_WORD *)v30 + ((unsigned __int64)Size >> 1)) = 0;
          v14 = (const wchar_t *)v30;
          if ( !LOWORD(v30[0]) )
            v14 = L"(null)";
          v26 = v14;
          v28 = *((_DWORD *)P + 15);
          SmKmSqmAddToStream(*v10);
        }
      }
    }
  }
  else
  {
LABEL_10:
    v6 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection_0(v6 + 1);
  }
  ExFreePoolWithTag(P, 0);
}
