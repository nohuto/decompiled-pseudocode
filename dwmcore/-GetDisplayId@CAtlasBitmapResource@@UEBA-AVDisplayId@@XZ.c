/*
 * XREFs of ?GetDisplayId@CAtlasBitmapResource@@UEBA?AVDisplayId@@XZ @ 0x1800E49A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CAtlasBitmapResource::GetDisplayId(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 8) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL) + 16LL);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 16LL))(v4, &v7);
    v5 = v7;
  }
  else
  {
    v5 = DisplayId::Invalid;
  }
  *a2 = v5;
  return a2;
}
