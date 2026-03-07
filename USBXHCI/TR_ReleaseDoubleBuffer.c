void __fastcall TR_ReleaseDoubleBuffer(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD **)(a1 + 232);
  if ( *v4 != a1 + 224 )
    __fastfail(3u);
  *a2 = a1 + 224;
  a2[1] = v4;
  *v4 = a2;
  *(_QWORD *)(a1 + 232) = a2;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
}
