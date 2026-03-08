/*
 * XREFs of ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C039FC7C
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C03A0354 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0019400 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C005E784 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 */

__int64 __fastcall DpiIndirectStartAdapter(struct _UNICODE_STRING *a1, const void *a2, unsigned int a3)
{
  size_t v4; // rsi
  char *StartContext; // rbx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // edi
  NTSTATUS v10; // eax
  void *v12; // [rsp+40h] [rbp-18h] BYREF
  void *ThreadHandle; // [rsp+48h] [rbp-10h] BYREF
  char *v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0LL;
  v4 = a3;
  StartContext = (char *)ExAllocatePool2(256LL, 1552LL, 1953656900LL);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v14);
  v12 = 0LL;
  v14 = StartContext;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v12);
  if ( !StartContext )
  {
    v7 = -1073741801LL;
LABEL_8:
    WdLogSingleEntry1(2LL, v7);
    goto LABEL_10;
  }
  v8 = RtlStringCchCopyW(StartContext + 4, 260LL, (char *)a1->Buffer);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( (unsigned int)v4 <= 0x400 )
    {
      memmove(StartContext + 528, a2, v4);
      *((_DWORD *)StartContext + 131) = v4;
      *(_DWORD *)StartContext = 4;
      ThreadHandle = 0LL;
      v10 = PsCreateSystemThread(
              &ThreadHandle,
              0x1FFFFFu,
              0LL,
              0LL,
              0LL,
              (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
              StartContext);
      v7 = v10;
      if ( v10 >= 0 )
      {
        v14 = 0LL;
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    LODWORD(v7) = -1073741811;
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
    LODWORD(v7) = v9;
  }
LABEL_10:
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v14);
  return (unsigned int)v7;
}
