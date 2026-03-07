void __fastcall VIDMM_SEGMENT::FreeVPRReserve(VIDMM_LINEAR_POOL **this)
{
  VIDMM_LINEAR_POOL *v2; // rax

  VIDMM_LINEAR_POOL::Free(this[19], this[57]);
  v2 = this[53];
  this[57] = 0LL;
  this[54] = 0LL;
  this[52] = v2;
}
