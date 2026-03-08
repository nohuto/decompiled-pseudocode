/*
 * XREFs of PiDevCfgPopCopyKeyEntry @ 0x1403C2124
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x140877924 (PiDevCfgCopyDeviceKeys.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

bool __fastcall PiDevCfgPopCopyKeyEntry(_QWORD *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  void **v5; // rax

  v4 = 0LL;
  if ( (_QWORD *)*a1 != a1 )
  {
    v4 = (_QWORD *)a1[1];
    if ( (_QWORD *)*v4 != a1 || (v5 = (void **)v4[1], *v5 != v4) )
      __fastfail(3u);
    a1[1] = v5;
    *v5 = a1;
    *a2 = v4[2];
    *a3 = v4[3];
    *a4 = *((_DWORD *)v4 + 8);
    ExFreePoolWithTag(v4, 0);
  }
  return v4 != 0LL;
}
