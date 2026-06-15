/*
 * XREFs of sub_180135CA8 @ 0x180135CA8
 * Callers:
 *     sub_1801368BC @ 0x1801368BC (sub_1801368BC.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180135CA8(__int64 a1, HSTRING a2)
{
  HRESULT Instance; // ebx
  IUnknown *v4; // rdi
  struct IUnknownVtbl *lpVtbl; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  IUnknown *pProxy; // [rsp+70h] [rbp+30h] BYREF

  pProxy = 0LL;
  v9 = 0LL;
  sub_1800461B8((__int64 *)&pProxy);
  Instance = CoCreateInstance(&stru_180176480, 0LL, 0x100017u, &stru_180176440, (LPVOID *)&pProxy);
  if ( Instance >= 0 )
  {
    Instance = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 0, 3u, 0LL, 0x40u);
    if ( Instance >= 0 )
    {
      v4 = pProxy;
      sub_1800461B8(&v9);
      lpVtbl = v4->lpVtbl;
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      Instance = ((__int64 (__fastcall *)(IUnknown *, PCWSTR, __int64, __int64, __int64 *))lpVtbl[2].QueryInterface)(
                   v4,
                   StringRawBuffer,
                   3LL,
                   0x20000000LL,
                   &v9);
    }
  }
  sub_1800461B8(&v9);
  sub_1800461B8((__int64 *)&pProxy);
  sub_18005F1A8(v7, (__int64)"Package license validation result", Instance);
  return (unsigned int)Instance;
}
