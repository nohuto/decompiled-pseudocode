/*
 * XREFs of ?VidSchiCancelQueuedFlipsAtISR@@YAEPEAX@Z @ 0x1C0048DA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiCancelQueuedFlipsAtISR(_DWORD *a1)
{
  int v2; // eax
  __int64 **v3; // rdx
  __int64 v4; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = DxgCoreInterface[67](
         *(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 2920LL),
         (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)(a1 + 2));
  a1[6] = v2;
  if ( v2 == -1073741822 )
  {
    v8 = 0LL;
    v3 = (__int64 **)*((_QWORD *)a1 + 2);
    v6[0] = a1[2];
    v6[1] = *((_DWORD *)*v3 + 4);
    v4 = *(_QWORD *)a1;
    v7 = **v3;
    a1[6] = DxgCoreInterface[66](
              *(ADAPTER_DISPLAY **)(*(_QWORD *)(v4 + 16) + 2920LL),
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v6);
    *(_QWORD *)(**((_QWORD **)a1 + 2) + 8LL) = v8;
  }
  return 1;
}
