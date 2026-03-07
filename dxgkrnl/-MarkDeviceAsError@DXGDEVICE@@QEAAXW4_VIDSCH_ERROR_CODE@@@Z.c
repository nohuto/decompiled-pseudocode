void __fastcall DXGDEVICE::MarkDeviceAsError(_QWORD *a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1[2] + 736LL) + 8LL) + 208LL))(
    a1[100],
    a2,
    0LL);
  DXGDEVICE::FlushScheduler(a1, 3u, 0xFFFFFFFD, 0);
}
