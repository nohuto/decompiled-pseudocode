/*
 * XREFs of ?ComputeGutterTouchTargeting@ImmersiveApplicationLayout@@YAHHW4DEVICE_SCALE_FACTOR@@@Z @ 0x1804E0B80
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x180485FF0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeGutterTouchTargeting(
        ImmersiveApplicationLayout *this,
        int a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  int v3; // r9d
  __int64 v4; // r10
  unsigned int v5; // r11d

  v3 = 0;
  v4 = 0LL;
  v5 = 184;
  while ( (_DWORD)this != a2 * *(_DWORD *)((char *)&unk_1805CA7E0 + v4 + 16) / 100 )
  {
    ++v3;
    v4 += 24LL;
    if ( v3 )
      return v5;
  }
  return *(unsigned int *)((char *)&unk_1805CA7E0 + v4 + 20);
}
