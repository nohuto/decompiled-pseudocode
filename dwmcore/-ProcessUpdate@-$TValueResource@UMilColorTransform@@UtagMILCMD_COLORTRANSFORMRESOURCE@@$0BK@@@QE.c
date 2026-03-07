__int64 __fastcall TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,26>::ProcessUpdate(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a3 + 8);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 24);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a3 + 40);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 56);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 72);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 88);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a3 + 104);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  return 0LL;
}
