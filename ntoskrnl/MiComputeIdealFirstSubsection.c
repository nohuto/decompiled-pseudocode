_DWORD *__fastcall MiComputeIdealFirstSubsection(struct _FILE_OBJECT *a1)
{
  _DWORD *result; // rax
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx

  result = MiAllocatePool(64, 0x28uLL, 0x3246694Du);
  v3 = 0LL;
  v4 = result;
  if ( result )
  {
    *(_QWORD *)result = 2LL;
    if ( (int)FsRtlGetFileExtents(a1, 2, 0LL, 0x40000000LL, result) >= 0 )
    {
      v5 = v4[1];
      if ( v5 == 1 )
      {
        if ( (v4[2] & 0x3FFFF) == 0 && *((_QWORD *)v4 + 2) == 0x40000LL )
          v3 = 0x40000LL;
      }
      else if ( v5 == 2 )
      {
        v6 = *((_QWORD *)v4 + 2);
        if ( v6 + *((_QWORD *)v4 + 4) == 0x40000 && (v6 & 0xF) == 0 )
          v3 = *((_QWORD *)v4 + 2);
      }
    }
    ExFreePoolWithTag(v4, 0);
    return (_DWORD *)v3;
  }
  return result;
}
