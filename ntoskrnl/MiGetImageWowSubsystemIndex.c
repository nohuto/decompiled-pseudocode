/*
 * XREFs of MiGetImageWowSubsystemIndex @ 0x140791C98
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x1406A1180 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x1406A1934 (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetImageWowSubsystemIndex(__int64 a1)
{
  unsigned int v1; // edx
  __int16 v2; // cx
  __int64 *v3; // rax

  v1 = 0;
  v2 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 48LL);
  v3 = &MiWowSubsystems6432;
  do
  {
    if ( v2 == *(_WORD *)v3 )
      return v1;
    ++v1;
    v3 = (__int64 *)((char *)v3 + 2);
  }
  while ( !v1 );
  return 0xFFFFFFFFLL;
}
