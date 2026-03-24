/*
 * XREFs of MiGetImageWowSubsystemIndex @ 0x14066B044
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x14066A9FC (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x14066AAC0 (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetImageWowSubsystemIndex(__int64 a1)
{
  unsigned int v1; // edx
  __int16 v2; // cx
  int *v3; // rax

  v1 = 0;
  v2 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 48LL);
  v3 = &MiWowSubsystems6432;
  do
  {
    if ( v2 == *(_WORD *)v3 )
      return v1;
    ++v1;
    v3 = (int *)((char *)v3 + 2);
  }
  while ( !v1 );
  return 0xFFFFFFFFLL;
}
