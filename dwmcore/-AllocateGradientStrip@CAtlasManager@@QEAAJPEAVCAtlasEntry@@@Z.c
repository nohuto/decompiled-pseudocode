/*
 * XREFs of ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x1800B7594
 * Callers:
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1800B72EC (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1800184C8 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180024034 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x1800FA984 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800FDEF4 (--$_Emplace_reallocate@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@st.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CAtlasManager::AllocateGradientStrip(CAtlasTexture ***this, struct CAtlasEntry *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  int v6; // esi
  CAtlasTexture **i; // rax
  CAtlasTexture *v8; // rbx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  CAtlasTexture *v15; // rbx
  CAtlasTexture **v16; // rdx
  CAtlasTexture *v17; // rdi
  CAtlasTexture *v18; // rbx
  struct CAtlasTexture *v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+18h]
  CAtlasTexture *v22; // [rsp+70h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (__int64)(this + 72);
  if ( !this )
    v5 = 1088LL;
  v6 = *(_DWORD *)v5;
  if ( *(int *)v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v6, 0x12u, 0LL);
  }
  else
  {
    for ( i = *this; i != this[1]; ++i )
    {
      v8 = *i;
      v9 = v4;
      if ( *((_DWORD *)*i + 7) )
      {
        if ( v8 )
          goto LABEL_8;
        break;
      }
      v4 = *((_DWORD *)v8 + 6);
      if ( v9 > v4 )
        v4 = v9;
    }
    v13 = CAtlasManager::DetermineIdealAtlasSize(v4);
    v22 = 0LL;
    v19 = 0LL;
    v20 = 1;
    v6 = CAtlasTexture::Create((struct CD3DDevice *)(this - 64), v13, &v19);
    if ( v20 )
    {
      v15 = v22;
      v22 = v19;
      if ( v15 )
      {
        CAtlasTexture::~CAtlasTexture(v15);
        operator delete(v15, 0x28uLL);
      }
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v6, 0x27u, 0LL);
      v18 = v22;
      if ( v22 )
      {
        CAtlasTexture::~CAtlasTexture(v22);
        operator delete(v18, 0x28uLL);
      }
      return (unsigned int)v6;
    }
    v16 = this[1];
    v8 = v22;
    if ( v16 == this[2] )
    {
      std::vector<std::unique_ptr<CAtlasTexture>>::_Emplace_reallocate<std::unique_ptr<CAtlasTexture>>(this, v16, &v22);
    }
    else
    {
      v22 = 0LL;
      *v16 = v8;
      ++this[1];
    }
    v17 = v22;
    if ( v22 )
    {
      CAtlasTexture::~CAtlasTexture(v22);
      operator delete(v17, 0x28uLL);
    }
LABEL_8:
    v10 = 0LL;
    if ( !*((_DWORD *)v8 + 6) )
LABEL_29:
      ModuleFailFastForHRESULT(2291662981LL, retaddr);
    v11 = *((_QWORD *)v8 + 2);
    while ( *(_QWORD *)(v11 + 8 * v10) )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *((_DWORD *)v8 + 6) )
        goto LABEL_29;
    }
    --*((_DWORD *)v8 + 7);
    *(_QWORD *)(v11 + 8 * v10) = a2;
    if ( *(_QWORD *)a2 )
      ModuleFailFastForHRESULT(2291674884LL, retaddr);
    *(_QWORD *)a2 = v8;
    *((_DWORD *)a2 + 4) = v10 + 1;
  }
  return (unsigned int)v6;
}
