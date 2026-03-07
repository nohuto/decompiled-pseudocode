void __fastcall __noreturn CcDebugExceptionFilter(ULONG_PTR *a1)
{
  KeBugCheckEx(0x34u, 0x5155BuLL, *a1, a1[1], *(_QWORD *)(*a1 + 16));
}
