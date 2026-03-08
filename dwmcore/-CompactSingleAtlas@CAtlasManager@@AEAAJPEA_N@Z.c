/*
 * XREFs of ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1800FA91C
 * Callers:
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x180077C44 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 * Callees:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1800184C8 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x180018504 (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1800185F4 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180024034 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x1800FA984 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CAtlasManager::CompactSingleAtlas(const struct CAtlasTexture ***this, bool *a2)
{
  const struct CAtlasTexture **v2; // rsi
  int v4; // ebx
  bool v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // r8d
  __int64 v10; // rcx
  CAtlasTexture *v11; // rdi
  const struct CAtlasTexture *v12; // rdx
  CAtlasTexture *v13; // rcx
  CAtlasTexture *v14; // rdi
  struct CAtlasTexture *v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  unsigned int v17; // [rsp+80h] [rbp+30h] BYREF
  CAtlasTexture *v18; // [rsp+88h] [rbp+38h]

  v2 = *this;
  v4 = 0;
  v5 = 0;
  v6 = CAtlasManager::DetermineIdealAtlasSize(*((_DWORD *)**this + 6) - *((_DWORD *)**this + 7));
  if ( v6 < v8 )
  {
    v18 = 0LL;
    v15 = 0LL;
    v16 = 1;
    v4 = CAtlasTexture::Create((struct CD3DDevice *)(v7 - 512), v6, &v15);
    if ( v16 )
    {
      v11 = v18;
      v18 = v15;
      if ( v11 )
      {
        CAtlasTexture::~CAtlasTexture(v11);
        operator delete(v11, 0x28uLL);
      }
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v4, 0x7Bu, 0LL);
    }
    else
    {
      v12 = *v2;
      v17 = 0;
      CAtlasTexture::CopyFrom(v18, v12, &v17);
      v13 = *v2;
      v5 = 1;
      *v2 = v18;
      v18 = v13;
      CAtlasTexture::PurgeAndNotify(v13);
    }
    v14 = v18;
    if ( v18 )
    {
      CAtlasTexture::~CAtlasTexture(v18);
      operator delete(v14, 0x28uLL);
    }
  }
  *a2 = v5;
  return (unsigned int)v4;
}
