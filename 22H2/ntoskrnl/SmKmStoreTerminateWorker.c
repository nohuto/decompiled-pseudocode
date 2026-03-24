/*
 * XREFs of SmKmStoreTerminateWorker @ 0x14059E120
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140267428 (SmKmStoreRefFromStoreIndex.c)
 *     SmEtwEnabled @ 0x140268C58 (SmEtwEnabled.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x1403FCFA0 (ZwSetSystemInformation.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x14059DB88 (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x14059DD08 (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x1405A00AC (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(PVOID P)
{
  unsigned int v2; // ebx
  __int64 v3; // r15
  unsigned int v4; // edx
  int v5; // r10d
  struct _EX_RUNDOWN_REF *v6; // rax
  ULONG UserDataCount; // ebx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rsi
  ULONGLONG *v9; // r14
  __int64 v10; // rbx
  struct _EX_RUNDOWN_REF *v11; // rax
  int v12; // eax
  size_t Size; // rbx
  const wchar_t *v14; // rax
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-B0h]
  __int64 v17; // [rsp+60h] [rbp-A8h]
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19[2]; // [rsp+70h] [rbp-98h] BYREF
  int v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+84h] [rbp-84h]
  int v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+8Ch] [rbp-7Ch]
  int v24; // [rsp+90h] [rbp-78h]
  const wchar_t *v25; // [rsp+98h] [rbp-70h]
  int v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+A8h] [rbp-60h]
  _DWORD v28[20]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v29[284]; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30[6]; // [rsp+578h] [rbp+470h] BYREF

  memset(v29, 0, 0x468uLL);
  v18 = 0LL;
  memset(v30, 0, sizeof(v30));
  memset(v28, 0, 0x44uLL);
  v17 = 68LL;
  v16 = (__int64 *)v28;
  v15 = 0x800000001LL;
  v28[0] = 1;
  if ( (int)ZwQuerySystemInformation(109LL, (__int64)&v15) >= 0
    && (v15 = 0xD00000001LL,
        v16 = (__int64 *)v29,
        LODWORD(v17) = 1128,
        memset(&v29[1], 0, 0x464uLL),
        v2 = 0,
        v29[0] = 259,
        (v28[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v3 = v2;
      v29[1] = v28[v2 + 1];
      if ( (int)ZwQuerySystemInformation(109LL, (__int64)&v15) >= 0 )
      {
        v4 = 0;
        if ( v29[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= BYTE1(v28[0]) )
        goto LABEL_10;
    }
    v5 = v29[24];
    while ( !_bittest(&v5, v4) != *((_DWORD *)P + 13) || v29[v4 + 8] != *((_DWORD *)P + 12) )
    {
      if ( ++v4 >= v29[4] )
        goto LABEL_9;
    }
    UserDataCount = 0;
    UserData = v30;
    v19[1] = (__int64)v29;
    v19[0] = (__int64)v30;
    v21 = 6;
    v23 = 1036;
    v9 = SmEtwEnabled(2);
    if ( v9 )
    {
      if ( P != (PVOID)-56LL )
        LOBYTE(v29[0]) = *((_BYTE *)P + 56);
      v30[0].Ptr = (ULONGLONG)v29;
      *(_QWORD *)&v30[0].Size = 1LL;
      if ( P != (PVOID)-60LL )
        *(_DWORD *)((char *)v29 + 1) = *((_DWORD *)P + 15);
      v30[1].Ptr = (ULONGLONG)v29 + 1;
      *(_QWORD *)&v30[1].Size = 4LL;
      v10 = *((_QWORD *)P + 5);
      v20 = 2;
      v22 = 5;
      SmKmEtwAppendProductName(v19, v10);
      SmKmEtwAppendObjectName((__int64)v19, *(_QWORD *)(v10 + 8));
      UserDataCount = v20;
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)v19[0];
    }
    v11 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection(v11 + 1);
    v15 = 0xA00000001LL;
    v16 = &v18;
    v12 = v28[v3 + 1];
    LODWORD(v17) = 8;
    LODWORD(v18) = 1;
    HIDWORD(v18) = v12;
    if ( (int)ZwSetSystemInformation(109LL, (__int64)&v15) >= 0 )
    {
      if ( v9 )
      {
        EtwWriteEx(*v9, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
        if ( !*((_DWORD *)P + 14) )
        {
          Size = UserData[3].Size;
          memmove(v29, (const void *)UserData[3].Ptr, Size);
          v24 = 2;
          v14 = (const wchar_t *)v29;
          v26 = 1;
          *((_WORD *)v29 + (Size >> 1)) = 0;
          if ( !LOWORD(v29[0]) )
            v14 = L"(null)";
          v25 = v14;
          v27 = *((_DWORD *)P + 15);
          SmKmSqmAddToStream(*v9);
        }
      }
    }
  }
  else
  {
LABEL_10:
    v6 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection(v6 + 1);
  }
  ExFreePoolWithTag(P, 0);
}
