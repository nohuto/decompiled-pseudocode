__int64 __fastcall CComposition::AddCompSurfInfoUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  struct CComposition *v2; // r10
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rax
  struct CCompositionSurfaceInfo **v6; // rcx
  unsigned int v8; // ecx
  int v9; // ebx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  struct CCompositionSurfaceInfo *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = g_pComposition;
  v3 = 0;
  v4 = 0LL;
  v5 = *((unsigned int *)g_pComposition + 196);
  if ( !(_DWORD)v5 )
  {
LABEL_5:
    v8 = v5 + 1;
    if ( (int)v5 + 1 < (unsigned int)v5 )
    {
      v3 = -2147024362;
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      v9 = 0;
      if ( v8 <= *((_DWORD *)g_pComposition + 195) )
      {
        *(_QWORD *)(*((_QWORD *)g_pComposition + 95) + 8 * v5) = a2;
        *((_DWORD *)v2 + 196) = v8;
LABEL_8:
        v3 = v9;
        (*(void (__fastcall **)(struct CCompositionSurfaceInfo *, struct CCompositionSurfaceInfo *, __int64))(*(_QWORD *)v13 + 8LL))(
          v13,
          a2,
          v4);
        return v3;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)g_pComposition + 760, 8LL, 1LL, &v13);
      v9 = v11;
      v3 = v11;
      if ( v11 >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2E3u, 0LL);
    return v3;
  }
  v6 = (struct CCompositionSurfaceInfo **)*((_QWORD *)g_pComposition + 95);
  while ( a2 != *v6 )
  {
    v4 = (unsigned int)(v4 + 1);
    ++v6;
    if ( (unsigned int)v4 >= (unsigned int)v5 )
      goto LABEL_5;
  }
  return v3;
}
