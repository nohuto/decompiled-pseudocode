/*
 * XREFs of ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C02D54B8
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C02D6200 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

void __fastcall STACKMEMOBJ::~STACKMEMOBJ(STACKMEMOBJ *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    Win32FreePool(v2);
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
    Win32FreePool(v3);
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
    Win32FreePool(v4);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
