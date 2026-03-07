void __fastcall NVMeGetNamespaceDescriptorListIdentify(__int64 a1)
{
  unsigned __int8 *v1; // r14
  unsigned int i; // esi
  int j; // edx
  __int64 v5; // rdx
  int v6; // eax
  unsigned __int8 *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = *(unsigned __int8 **)(a1 + 1936);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 232); ++i )
    {
      if ( *(_QWORD *)(a1 + 8LL * i + 1952) )
      {
        LocalCommandReuse(a1, a1 + 944);
        for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= j )
          ++j;
        *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
        v5 = *(_QWORD *)(a1 + 1040) + 4096LL;
        *(_QWORD *)(v5 + 24) = *(_QWORD *)(a1 + 1944);
        *(_BYTE *)v5 = 6;
        *(_DWORD *)(v5 + 4) = i + 1;
        *(_BYTE *)(v5 + 40) = 3;
        *(_DWORD *)(v5 + 42) = 0;
        *(_BYTE *)(v5 + 47) = 0;
        ProcessCommand(a1, a1 + 952);
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *(_BYTE *)(a1 + 955) == 1 )
        {
          v6 = *v1;
          v7 = v1;
          v8 = 0;
          while ( v6 && v8 < 0x1000 )
          {
            if ( v6 == 4 )
            {
              if ( v7[4] == 2 )
              {
                v10 = *(_QWORD *)(a1 + 8LL * i + 1952);
                *(_DWORD *)(v10 + 20) |= 0x100u;
                *(_DWORD *)(a1 + 32) |= 0x2000u;
              }
              break;
            }
            v9 = v7[1];
            v8 += v9 + 4;
            v7 += v9 + 4;
            v6 = *v7;
          }
        }
      }
    }
  }
}
