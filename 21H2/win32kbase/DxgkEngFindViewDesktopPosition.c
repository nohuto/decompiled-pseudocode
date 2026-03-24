/*
 * XREFs of DxgkEngFindViewDesktopPosition @ 0x1C0010B70
 * Callers:
 *     <none>
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0010CB4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0010CF0 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     hdevEnumerate @ 0x1C0010E40 (hdevEnumerate.c)
 */

__int64 __fastcall DxgkEngFindViewDesktopPosition(_DWORD *a1, int a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 i; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  struct _LUID *v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  for ( i = 0LL; ; i = v9 )
  {
    v8 = hdevEnumerate(i);
    v9 = v8;
    if ( !v8 )
      break;
    v13 = v8;
    v10 = *(_DWORD *)(v8 + 40);
    if ( (v10 & 0x400) == 0 && (v10 & 0x20000) == 0 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v13) )
      {
        v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v13);
        if ( v11->LowPart == *a1 && v11->HighPart == a1[1] && *(_DWORD *)(*(_QWORD *)(v9 + 2576) + 256LL) == a2 )
        {
          v3 = 1;
          *a3 = *(_QWORD *)(v9 + 2584);
        }
      }
    }
  }
  return v3;
}
