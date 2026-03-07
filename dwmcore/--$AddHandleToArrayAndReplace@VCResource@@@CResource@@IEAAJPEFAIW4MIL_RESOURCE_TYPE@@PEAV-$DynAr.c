__int64 __fastcall CResource::AddHandleToArrayAndReplace<CResource>(
        CResource *this,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // edx
  struct CResource *Resource; // rax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r8
  int v16; // edi
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  struct CResource *v21; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v7 = *a2;
  if ( v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a5, v7, a3);
    v21 = Resource;
    if ( !Resource )
    {
      v6 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024890, 0x268u, 0LL);
      return v6;
    }
    v12 = CResource::RegisterNotifier(this, Resource);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x26Cu, 0LL);
      return v6;
    }
    v14 = *(_DWORD *)(a4 + 24);
    v15 = v14 + 1;
    if ( (unsigned int)v15 < v14 )
    {
      v6 = -2147024362;
      v16 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      v16 = 0;
      if ( (unsigned int)v15 <= *(_DWORD *)(a4 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)a4 + 8LL * v14) = v21;
        *(_DWORD *)(a4 + 24) = v15;
LABEL_7:
        v6 = v16;
        *a2 = *(_DWORD *)(a4 + 24) - 1;
        return v6;
      }
      v18 = DynArrayImpl<1>::AddMultipleAndSet(a4, 8u, v15, &v21);
      v16 = v18;
      v6 = v18;
      if ( v18 >= 0 )
        goto LABEL_7;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xC0u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v16, 0x272u, 0LL);
    CResource::UnRegisterNotifierInternal(this, v21);
  }
  return v6;
}
