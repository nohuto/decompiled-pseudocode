/*
 * XREFs of ?ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z @ 0x1800F0D50
 * Callers:
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F0940 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018CC0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::VirtualTouchpad::ServerIsActiveChanged(__int64 a1, char a2)
{
  LPVOID v4; // rax
  __int64 v5; // r10
  char v6; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  char *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v4 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 512LL) )
  {
    v14 = 0;
    v11 = 0;
    v12 = &v6;
    v6 = a2;
    v9 = &v7;
    v7 = a1;
    v13 = 1;
    v10 = 8;
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1801CE26B, 0LL, 0LL, 4u, &v8);
  }
}
