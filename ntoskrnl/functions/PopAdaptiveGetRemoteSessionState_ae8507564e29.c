__int64 __fastcall PopAdaptiveGetRemoteSessionState(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  char v5; // r10
  unsigned int v6; // edx

  *a4 = 256;
  v5 = 0;
  *(_QWORD *)a3 = 0LL;
  *a5 = 256;
  if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                        - *(_QWORD *)a2)
     / 0x3E8 >= (unsigned int)PopInputTimeout
    && PopInputTimeout
    || !*(_DWORD *)(a2 + 24) )
  {
    *(_DWORD *)(a3 + 8) = 0;
    v6 = 2;
    v5 = 1;
  }
  else
  {
    v6 = 0;
    *(_DWORD *)(a3 + 8) = PopInputTimeout;
  }
  *(_BYTE *)(a3 + 12) = v5;
  return PopSetSessionUserStatus(a1, v6);
}
