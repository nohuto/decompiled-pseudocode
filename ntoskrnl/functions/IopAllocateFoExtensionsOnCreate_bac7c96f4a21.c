int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int SetSpecificExtension; // ebx
  int result; // eax
  __int64 v11; // rcx
  __int64 Silo; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  void *v18; // rsi
  _QWORD *v19; // [rsp+60h] [rbp+18h] BYREF

  SetSpecificExtension = -1073741811;
  if ( (*(_DWORD *)(a3 + 152) & 2) != 0 )
  {
    result = IopSetFileObjectExtensionFlag(a1, 1, 1);
    SetSpecificExtension = result;
    if ( result < 0 )
      return result;
  }
  if ( (*(_DWORD *)(a3 + 152) & 1) != 0 )
  {
    v19 = 0LL;
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &v19, 0LL);
    SetSpecificExtension = result;
    if ( result < 0 )
      return result;
    *v19 = *(_QWORD *)(a3 + 176);
  }
  if ( (*(_DWORD *)(a3 + 152) & 4) != 0 )
  {
    v19 = 0LL;
    if ( !IopCheckStackForTransactionSupport(a2)
      && (*(_DWORD *)(a3 + 88) != 1 || (*(_BYTE *)(a3 + 70) & 6) != 0 || (a5 & 0xFEEDFF56) != 0)
      && !*(_BYTE *)(a3 + 137) )
    {
      return -1072103361;
    }
    v17 = *(_QWORD *)(a3 + 184);
    if ( !v17 )
      return -1073741811;
    if ( *(_WORD *)v17 != 16 )
      return -1073741811;
    v18 = *(void **)(v17 + 8);
    if ( !v18 )
      return -1073741811;
    result = ObReferenceObjectByPointer(v18, 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
    if ( result < 0 )
      return result;
    SetSpecificExtension = IopGetSetSpecificExtension(a1, 0, 0x10u, 1, &v19, 0LL);
    if ( SetSpecificExtension < 0 )
    {
      ObfDereferenceObject(v18);
      return SetSpecificExtension;
    }
    *(_OWORD *)v19 = *(_OWORD *)*(_QWORD *)(a3 + 184);
  }
  if ( (*(_DWORD *)(a3 + 152) & 0x40) == 0 && PsIsHostSilo(*(_QWORD *)(a4 + 8)) )
  {
    v11 = *(_QWORD *)(a3 + 40);
    if ( !v11 )
      return SetSpecificExtension;
    Silo = IoGetSilo(v11);
    if ( PsIsHostSilo(Silo) )
      return SetSpecificExtension;
  }
  v13 = *(_QWORD *)(a3 + 40);
  SetSpecificExtension = 0;
  v14 = *(_DWORD **)(a4 + 8);
  if ( v13 && PsIsServerSilo(*(_QWORD *)(a4 + 8)) )
    v14 = (_DWORD *)IoGetSilo(v16);
  if ( PsIsHostSilo((__int64)v14) )
    return SetSpecificExtension;
  v19 = 0LL;
  result = PsAcquireSiloHardReference(v14);
  if ( result >= 0 )
  {
    SetSpecificExtension = IopGetSetSpecificExtension(a1, 7u, 0x10u, 1, &v19, 0LL);
    if ( SetSpecificExtension < 0 )
    {
      PsReleaseSiloHardReference(v14);
    }
    else
    {
      v15 = v19;
      *(_DWORD *)v19 = 16;
      v15[1] = v14;
      *((_DWORD *)v15 + 1) |= 1u;
      ObfReferenceObjectWithTag(v14, 0x70536F49u);
    }
    return SetSpecificExtension;
  }
  return result;
}
