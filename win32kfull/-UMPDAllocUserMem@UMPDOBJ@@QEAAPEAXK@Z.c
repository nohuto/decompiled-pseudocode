void *__fastcall UMPDOBJ::UMPDAllocUserMem(UMPDOBJ *this, unsigned int a2)
{
  __int64 v2; // rdi
  size_t Size; // [rsp+20h] [rbp-58h]
  _QWORD v6[2]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  unsigned int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]

  v2 = a2;
  v6[1] = this;
  v6[0] = 0LL;
  v8 = 0LL;
  v11 = 0;
  v7[0] = 32;
  v7[1] = 117;
  v9 = *(_QWORD *)this;
  v10 = a2;
  LODWORD(Size) = 8;
  UMPDOBJ::Thunk(this, v7, 0x20u, v6, Size);
  if ( (_DWORD)v2 && (v6[0] + v2 > MmUserProbeAddress || (unsigned __int64)(v6[0] + v2) < v6[0]) )
    *(_BYTE *)MmUserProbeAddress = 0;
  UMPDOBJ::ResetHeap(this);
  return (void *)v6[0];
}
