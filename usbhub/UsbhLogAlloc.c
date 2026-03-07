unsigned __int64 __fastcall UsbhLogAlloc(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  _DWORD *v6; // rbx
  unsigned __int64 result; // rax

  v4 = a3 << 12;
  v5 = (unsigned int)(a3 << 12);
  v6 = FdoExt(a1) + 1320;
  memset(v6, 0, v4);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = v6;
  result = (unsigned __int64)v6 + (v5 & 0xFFFFFFFFFFFFFFE0uLL) - 32;
  *(_DWORD *)(a2 + 4) = (v4 >> 5) - 1;
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
