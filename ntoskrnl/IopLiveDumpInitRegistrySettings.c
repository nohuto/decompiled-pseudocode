void __fastcall IopLiveDumpInitRegistrySettings(__int64 a1)
{
  PVOID v2; // rcx
  PVOID v3; // rcx
  PVOID v4; // rcx
  PVOID v5; // rcx
  PVOID v6; // rcx
  unsigned __int64 v7; // rdx
  PVOID v8; // rcx
  UNICODE_STRING v9; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+58h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+20h] BYREF

  Handle = 0LL;
  P = 0LL;
  v9.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\LiveDump";
  *(_QWORD *)&v9.Length = 7864438LL;
  if ( IopOpenRegistryKey(&Handle, 0LL, &v9, 0x20019u, 0) >= 0 )
  {
    if ( IopGetRegistryValue(Handle, L"UtilizeIOSpace", 4, &P) < 0 )
    {
      *(_DWORD *)(a1 + 80) &= ~0x800u;
    }
    else
    {
      v2 = P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFF7FF | (*(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0
                                                                  ? 0x800
                                                                  : 0);
      ExFreePoolWithTag(v2, 0);
    }
    if ( IopGetRegistryValue(Handle, L"MirrorSystemPartitionOnly", 4, &P) < 0 )
    {
      *(_DWORD *)(a1 + 80) &= ~0x20u;
    }
    else
    {
      v3 = P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFFDF | (*(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0
                                                                  ? 0x20
                                                                  : 0);
      ExFreePoolWithTag(v3, 0);
    }
    if ( IopGetRegistryValue(Handle, L"EnableInstrumentation", 4, &P) < 0 )
    {
      *(_DWORD *)(a1 + 80) &= ~0x80u;
    }
    else
    {
      v4 = P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFF7F | (*(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0
                                                                  ? 0x80
                                                                  : 0);
      ExFreePoolWithTag(v4, 0);
    }
    if ( IopGetRegistryValue(Handle, L"SkipDisablingInterrupts", 4, &P) < 0 )
    {
      *(_DWORD *)(a1 + 80) &= ~0x100u;
    }
    else
    {
      v5 = P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFFEFF | (*(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0
                                                                  ? 0x100
                                                                  : 0);
      ExFreePoolWithTag(v5, 0);
    }
    if ( IopGetRegistryValue(Handle, L"DumpFileSize", 4, &P) < 0 )
    {
      *(_DWORD *)(a1 + 80) &= ~0x200u;
    }
    else
    {
      v6 = P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      {
        v7 = (unsigned __int64)*(unsigned int *)((char *)P + *((unsigned int *)P + 2)) << 20;
        *(_DWORD *)(a1 + 80) |= 0x200u;
        *(_QWORD *)(a1 + 1144) = v7;
      }
      ExFreePoolWithTag(v6, 0);
    }
    if ( IopGetRegistryValue(Handle, L"EnableDynamicLowMemoryThreshold", 4, &P) < 0 )
    {
      *(_DWORD *)(a1 + 80) &= ~0x2000u;
    }
    else
    {
      v8 = P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0xFFFFDFFF | (*(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0
                                                                  ? 0x2000
                                                                  : 0);
      ExFreePoolWithTag(v8, 0);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 80) &= 0xFFFFF45F;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
}
