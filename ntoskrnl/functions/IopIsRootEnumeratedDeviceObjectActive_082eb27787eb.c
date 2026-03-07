bool __fastcall IopIsRootEnumeratedDeviceObjectActive(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rcx

  v1 = *(_DWORD **)(a1 + 64);
  if ( v1 && (*v1 & 1) != 0 )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  return !v2 || (*(_BYTE *)(v2 + 398) & 1) == 0;
}
