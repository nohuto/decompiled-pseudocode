/*
 * XREFs of ?GetVerticesCore@CGeometry2DGroup@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x18021ADB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetVerticesCore(
        CGeometry2DGroup *this,
        struct MilVertexXYZDUV2 *a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // esi
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // r14
  unsigned int v11; // r13d
  int v12; // eax
  __int64 v13; // rcx

  v3 = *((_DWORD *)this + 8);
  v4 = 0;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 10);
    v9 = (_QWORD *)*((_QWORD *)this + 11);
    while ( v8 != v9 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 184LL))(*v8);
        v12 = (*(__int64 (__fastcall **)(__int64, struct MilVertexXYZDUV2 *, _QWORD))(*(_QWORD *)v10 + 224LL))(
                v10,
                a2,
                a3);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1B5u, 0LL);
          break;
        }
        a2 = (struct MilVertexXYZDUV2 *)((char *)a2 + 32 * v11);
        a3 -= v11;
      }
      ++v8;
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v4;
}
