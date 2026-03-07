void __fastcall NP_CONTEXT::NpLeafDerefInternal(struct NP_CONTEXT::NP_CTX *a1, void **a2)
{
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // ecx
  int v6; // ebx

  v3 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ (4 * (*(_DWORD *)a2 >> 2) - 4)) & 0xFFC;
  *(_DWORD *)a2 = v3;
  if ( (v3 & 0xFFC) == 0 )
  {
    *(_DWORD *)a2 = v3 & 0xFFFFFFFD;
    v4 = (__int64)((unsigned int)KeMaximumIncrement
                 * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
    v5 = v4 - *(_DWORD *)(*(_QWORD *)a1 + 52LL);
    if ( v5 > 0x3FF )
      v5 = 1023;
    *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (4 * v5)) & 0xFFC;
    if ( v5 >= 0x2FF )
    {
      v6 = v4 - 511;
      (*(void (__fastcall **)(struct NP_CONTEXT::NP_CTX *, __int64 (__fastcall *)(void *, void *, unsigned __int64 *), _QWORD))(*(_QWORD *)a1 + 8LL))(
        a1,
        NP_CONTEXT::NpiRebaseCallback,
        (unsigned int)(v4 - 511 - *(_DWORD *)(*(_QWORD *)a1 + 52LL)));
      *(_DWORD *)(*(_QWORD *)a1 + 52LL) = v6;
    }
  }
}
