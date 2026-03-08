/*
 * XREFs of ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A31C4
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A2374 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x180033588 (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

void __fastcall CManipulationContext::RevalidationCleanup(int a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // r14
  int v5; // r15d
  __int64 v6; // rsi
  int v7; // ebp
  __int64 (__fastcall ***v8)(_QWORD); // rdi
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17[9])(_QWORD); // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h]

  if ( a1 > 0 )
  {
    v3 = 0;
    v4 = a2;
    v5 = a1;
    v6 = 0LL;
    v7 = 1;
    do
    {
      v17[0] = *(__int64 (__fastcall ****)(_QWORD))(v6 + *(_QWORD *)(v4 + 24));
      v8 = v17[0];
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v17);
      if ( (*((_BYTE *)v8 + 28) & 4) != 0 )
      {
        v10 = 0;
        if ( *((int *)v8 + 18) > 0 )
        {
          v11 = 0LL;
          v20 = 0LL;
          do
          {
            v12 = *(__int64 *)((char *)v8[8] + v11);
            if ( v12 )
            {
              while ( 1 )
              {
                v13 = (_QWORD *)(v12 + 200);
                v12 = *(_QWORD *)(v12 + 200);
                if ( !v12 )
                  break;
                *v13 = 0LL;
                CQueue<CResource *>::Insert(a3, v9, v12);
              }
              v11 = v20;
            }
            v11 += 8LL;
            ++v10;
            v20 = v11;
          }
          while ( v10 < *((_DWORD *)v8 + 18) );
          v4 = a2;
        }
        v14 = *(_QWORD *)(v4 + 24);
        if ( *(_QWORD *)(*(_QWORD *)(v6 + v14) + 48LL) )
        {
          *((_BYTE *)v8 + 28) &= ~4u;
        }
        else
        {
          if ( v3 >= 0 && v7 <= *(_DWORD *)(v4 + 32) )
          {
            Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)(v14 + 8LL * v3));
            v15 = *(_DWORD *)(v4 + 32);
            if ( v7 != v15 )
            {
              v16 = *(_QWORD *)(v4 + 24) + 8LL * v3;
              memmove_0((void *)v16, (const void *)(v16 + 8), 8LL * (v15 - v3 - 1));
            }
            --*(_DWORD *)(v4 + 32);
          }
          --v5;
          --v3;
          --v7;
          v6 -= 8LL;
        }
      }
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)v17);
      ++v3;
      ++v7;
      v6 += 8LL;
    }
    while ( v3 < v5 );
  }
}
