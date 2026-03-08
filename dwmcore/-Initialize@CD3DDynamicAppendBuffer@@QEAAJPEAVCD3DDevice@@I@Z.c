/*
 * XREFs of ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z @ 0x1800CFD2C
 * Callers:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x1800CFBE0 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x1800CFD5C (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::Initialize(
        CD3DDynamicAppendBuffer *this,
        struct CD3DDevice *a2,
        unsigned int a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  *(_QWORD *)this = a2;
  v3 = CD3DDynamicAppendBuffer::EnsureByteSpace(this, a3, 1);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x18u, 0LL);
  return v5;
}
