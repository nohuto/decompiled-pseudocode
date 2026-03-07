__int64 FsRtlGetCurrentProcessLoaderList()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24] + 24) + 16LL;
}
