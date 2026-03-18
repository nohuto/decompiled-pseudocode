/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0010E28
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0010B54 (UmfdDispatchEscape.c)
 * Callees:
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1C0011080 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C011C498 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(volatile void **a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct UmfdTls *v4; // r14
  __int64 v5; // rbx
  __int64 *v6; // rax
  struct UmfdTls *v7; // rax
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r13
  __int64 v11; // rbx
  char v12; // r12
  __int64 v13; // rsi
  __int64 *v14; // rax
  struct UmfdTls *v15; // rdx
  __int64 v16; // rsi
  int v17; // eax
  int v18; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  struct UmfdTls *v20; // [rsp+88h] [rbp+20h]

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( v2 )
  {
    v4 = *(struct UmfdTls **)(v2 + 352);
    v20 = v4;
    if ( v4 || (v4 = UmfdTls::Create(), *(_QWORD *)(v2 + 352) = v4, (v20 = v4) != 0LL) )
    {
      *((_QWORD *)v4 + 6) = 0LL;
      *((_QWORD *)v4 + 5) = 0LL;
      if ( *((int *)v4 + 8) >= 0 )
      {
        v5 = 0LL;
        v6 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v6 )
          v5 = *v6;
        if ( !v5 )
          goto LABEL_30;
        v7 = *(struct UmfdTls **)(v5 + 352);
        if ( !v7 )
        {
          v7 = UmfdTls::Create();
          *(_QWORD *)(v5 + 352) = v7;
          if ( !v7 )
            goto LABEL_30;
        }
        v8 = *((_QWORD *)v7 + 3);
        if ( v8 && **(_QWORD **)v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      }
      v9 = UmfdHostSendCompleteWaitReceive(*((unsigned int *)a1 + 10));
      if ( v9 >= 0 )
      {
        v10 = 0LL;
        v18 = 0;
        v11 = 0LL;
        v12 = 0;
        v13 = 0LL;
        v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v14 )
          v13 = *v14;
        if ( !v13
          || (v15 = *(struct UmfdTls **)(v13 + 352)) == 0LL
          && (v15 = UmfdTls::Create(), (*(_QWORD *)(v13 + 352) = v15) == 0LL) )
        {
LABEL_30:
          v9 = -1073741801;
          goto LABEL_28;
        }
        v16 = *((_QWORD *)v15 + 3);
        if ( !v16 )
        {
          v9 = -1073740032;
          goto LABEL_28;
        }
        v19 = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64, struct UmfdTls *, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, v15, &v19);
        if ( v17 >= 0 )
        {
          v10 = v19;
          v18 = *(_DWORD *)(v16 + 8);
          v11 = *(_QWORD *)(v16 + 24);
          v12 = *(_BYTE *)(v16 + 32);
        }
        v9 = v17;
        if ( v17 >= 0 )
        {
          ProbeForWrite(a1[1], 8uLL, 4u);
          ProbeForWrite(a1[2], 4uLL, 4u);
          ProbeForWrite(a1[4], 1uLL, 1u);
          *(_QWORD *)a1[1] = v10;
          *(_DWORD *)a1[2] = v18;
          *(_BYTE *)a1[4] = v12;
          if ( v12 )
          {
            ProbeForWrite(a1[3], 8uLL, 4u);
            *(_QWORD *)a1[3] = v11;
          }
        }
      }
      if ( v9 >= 0 )
      {
LABEL_25:
        *((_DWORD *)a1 + 2) = v9;
        *((_DWORD *)v4 + 8) = v9;
        return;
      }
LABEL_28:
      *((_QWORD *)v4 + 6) = 0LL;
      *((_QWORD *)v4 + 5) = 0LL;
      goto LABEL_25;
    }
  }
  *((_DWORD *)a1 + 2) = -1073741801;
}
