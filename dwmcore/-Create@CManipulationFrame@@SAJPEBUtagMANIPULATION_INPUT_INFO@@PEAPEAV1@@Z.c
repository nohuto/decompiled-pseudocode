/*
 * XREFs of ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x18019FA84
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019C918 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

__int64 __fastcall CManipulationFrame::Create(
        const struct tagMANIPULATION_INPUT_INFO *a1,
        struct CManipulationFrame **a2)
{
  int v2; // eax
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  void *v7; // rax
  __int64 (__fastcall ***v8)(_QWORD); // rax
  __int64 (__fastcall ***v9)(_QWORD); // rbx
  int v10; // ecx
  int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int i; // r9d
  __int64 v15; // r8
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 (__fastcall ***v21)(_QWORD); // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 37);
  if ( !v2 || (v5 = 248LL * (unsigned int)(v2 - 1), v5 > 0xFFFFFFFF) || (v6 = v5 + 616, v6 < 0x268) )
    v6 = 0;
  v7 = DefaultHeap::AllocClear(v6);
  *a2 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD))memset_0(v7, 0, 0x268uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *((_DWORD *)a1 + 37);
    v11 = *((_DWORD *)a1 + 42);
    *((_DWORD *)v8 + 2) = 0;
    *v8 = (__int64 (__fastcall **)(_QWORD))&CManipulationFrame::`vftable';
    *((_DWORD *)v8 + 4) = v10;
    *((_DWORD *)v8 + 6) = v11;
    *((_OWORD *)v8 + 2) = *(_OWORD *)a1;
    *((_OWORD *)v8 + 3) = *((_OWORD *)a1 + 1);
    *((_OWORD *)v8 + 4) = *((_OWORD *)a1 + 2);
    *((_OWORD *)v8 + 5) = *((_OWORD *)a1 + 3);
    *((_OWORD *)v8 + 6) = *((_OWORD *)a1 + 4);
    *((_OWORD *)v8 + 7) = *((_OWORD *)a1 + 5);
    *((_OWORD *)v8 + 8) = *((_OWORD *)a1 + 6);
    *((_OWORD *)v8 + 9) = *((_OWORD *)a1 + 7);
    *((_OWORD *)v8 + 10) = *((_OWORD *)a1 + 8);
  }
  else
  {
    v9 = 0LL;
  }
  v21 = v9;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v21);
  if ( v9 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 37); LOBYTE(v9[v15 + 76]) &= ~1u )
    {
      v15 = 31LL * i;
      v16 = 240LL * i++;
      v17 = &v9[v15 + 46];
      v18 = (_OWORD *)((char *)a1 + v16 + 160);
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      v17 += 8;
      v19 = v18[7];
      v18 += 8;
      *(v17 - 1) = v19;
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      v9[v15 + 49] = (__int64 (__fastcall **)(_QWORD))*(unsigned int *)((char *)a1 + v16 + 352);
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v21);
    *a2 = (struct CManipulationFrame *)v9;
    v13 = 0;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x2Cu, 0LL);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v21);
  return v13;
}
