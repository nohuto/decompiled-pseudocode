void __fastcall VIDMM_DEVICE::IncrementCurrentUsage(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx

  v2 = **a2;
  v3 = (*(_DWORD *)(v2 + 68) >> 17) & 0xF;
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 296LL * (*(_DWORD *)(v2 + 68) & 0x3F);
  if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (_DWORD)v3 == 2 )
    v3 = 0LL;
  *(_QWORD *)(v4 + 8 * v3 + 72) += *(_QWORD *)(v2 + 16);
  v5 = (*(_DWORD *)(v2 + 68) >> 13) & 0xF;
  *(_QWORD *)(v4 + 8 * v5 + 136) += *(_QWORD *)(v2 + 16);
}
