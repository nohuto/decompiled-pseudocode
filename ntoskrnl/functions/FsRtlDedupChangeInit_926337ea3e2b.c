__int64 __fastcall FsRtlDedupChangeInit(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  PVOID v7; // rbx
  unsigned int v8; // edi
  _BYTE v10[4]; // [rsp+30h] [rbp-69h] BYREF
  int v11; // [rsp+34h] [rbp-65h] BYREF
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-59h] BYREF
  const wchar_t *v14; // [rsp+48h] [rbp-51h]
  _DWORD v15[2]; // [rsp+50h] [rbp-49h] BYREF
  const wchar_t *v16; // [rsp+58h] [rbp-41h]
  char v17; // [rsp+60h] [rbp-39h] BYREF

  v15[1] = 0;
  v13[1] = 0;
  *a1 = 0LL;
  v10[0] = 0;
  P = &v17;
  v11 = 92;
  v16 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DedupChange";
  v15[0] = 8257660;
  v14 = L"Enabled";
  v13[0] = 1048590;
  v6 = FsRtlpDedupChangeQueryValueKey(v15, v13, &v11, &P, v10);
  v7 = P;
  if ( v6 < 0 || *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
    v8 = FsRtlpDedupChangeRegisterVolume(a2, a3, a1);
  else
    v8 = -1073741823;
  if ( v10[0] )
    ExFreePoolWithTag(v7, 0);
  return v8;
}
