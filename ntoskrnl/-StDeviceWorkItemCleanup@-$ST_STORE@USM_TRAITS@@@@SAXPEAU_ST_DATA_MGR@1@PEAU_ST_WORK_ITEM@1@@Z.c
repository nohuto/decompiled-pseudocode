void __fastcall ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup(_DWORD *a1, __int64 a2)
{
  int v4; // ecx
  int v5; // ecx

  ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, (unsigned int)(*(_DWORD *)(a2 + 24) >> a1[203]));
  v4 = a1[450];
  if ( (v4 & 1) != 0 && (*(_QWORD *)(a2 + 16) | 1LL) == *((_QWORD *)a1 + 225) )
    a1[450] = v4 & 0xFFFFFFFE;
  else
    ExFreePoolWithTag(*(PVOID *)(a2 + 16), 0);
  v5 = a1[452];
  if ( (v5 & 1) != 0 && (a2 | 1) == *((_QWORD *)a1 + 226) )
    a1[452] = v5 & 0xFFFFFFFE;
  else
    ExFreePoolWithTag((PVOID)a2, 0);
}
