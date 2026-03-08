/*
 * XREFs of CmpPublishEventForPcaResolver @ 0x140A0FE7C
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     PsGetCurrentThreadProcess @ 0x1402C0BB0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

char __fastcall CmpPublishEventForPcaResolver(__int64 a1, unsigned __int16 *a2)
{
  _UNKNOWN **v2; // rax
  char v4; // bl
  _KPROCESS *CurrentThreadProcess; // rax
  int v7; // r8d
  unsigned __int16 *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  __int16 v12; // [rsp+38h] [rbp-39h] BYREF
  __int16 v13; // [rsp+3Ch] [rbp-35h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp+7h] BYREF
  __int64 v16; // [rsp+88h] [rbp+17h]
  int v17; // [rsp+90h] [rbp+1Fh]
  int v18; // [rsp+94h] [rbp+23h]
  __int16 *v19; // [rsp+98h] [rbp+27h]
  int v20; // [rsp+A0h] [rbp+2Fh]
  int v21; // [rsp+A4h] [rbp+33h]
  __int64 v22; // [rsp+A8h] [rbp+37h]
  int v23; // [rsp+B0h] [rbp+3Fh]
  int v24; // [rsp+B4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  v4 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( EtwAppCompatProvRegHandle )
  {
    LOBYTE(v2) = EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED);
    if ( (_BYTE)v2 )
    {
      if ( (*(_DWORD *)(a1 + 160) & 1) == 0 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        v4 = 1;
      }
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      v7 = *a2;
      v8 = (unsigned __int16 *)CurrentThreadProcess[1].ActiveProcessors.StaticBitmap[2];
      LOWORD(CurrentThreadProcess) = *v8;
      UserData.Reserved = 0;
      v12 = (unsigned __int16)CurrentThreadProcess >> 1;
      v13 = (unsigned __int16)v7 >> 1;
      UserData.Ptr = (ULONGLONG)&v12;
      UserData.Size = 2;
      v9 = *((_QWORD *)v8 + 1);
      v10 = *v8;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = v9;
      v19 = &v13;
      v22 = *((_QWORD *)a2 + 1);
      v17 = v10;
      v20 = 2;
      v23 = v7;
      LOBYTE(v2) = EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED, 0LL, 4u, &UserData);
      if ( v4 )
        LOBYTE(v2) = CmpDetachFromRegistryProcess(&ApcState);
    }
  }
  return (char)v2;
}
