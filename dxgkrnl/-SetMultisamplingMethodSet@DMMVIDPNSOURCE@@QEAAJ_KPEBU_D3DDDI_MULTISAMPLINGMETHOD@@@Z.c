__int64 __fastcall DMMVIDPNSOURCE::SetMultisamplingMethodSet(
        DMMVIDPNSOURCE *this,
        __int64 a2,
        const struct _D3DDDI_MULTISAMPLINGMETHOD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v6 = DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::Initialize((_QWORD *)this + 16, 8 * a2, a3);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL, v6);
  return v7;
}
