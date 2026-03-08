/*
 * XREFs of ?GetIndicesCore@CMeshGeometry2D@@MEAAJIPEAII@Z @ 0x1802553C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMeshGeometry2D::GetIndicesCore(CMeshGeometry2D *this, int a2, unsigned int *a3, unsigned int a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8

  v6 = (__int64)(*((_QWORD *)this + 18) - *((_QWORD *)this + 17)) >> 2;
  if ( a4 >= (unsigned int)v6 )
  {
    v7 = 0;
    if ( (_DWORD)v6 )
    {
      v8 = 0LL;
      v9 = (unsigned int)v6;
      do
      {
        a3[v8] = a2 + *(_DWORD *)(*((_QWORD *)this + 17) + v8 * 4);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0xA6u, 0LL);
  }
  return v7;
}
