/*
 * XREFs of ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0326944
 * Callers:
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C03256C8 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0329F40 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C0016294 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C00534B8 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::DestroySourceContextLists(OUTPUTDUPL_MGR *this)
{
  __int64 i; // rbx
  __int64 v3; // rbp
  AUTOEXPANDALLOCATION *v4; // rcx
  OUTPUTDUPL_CONTEXT **v5; // rcx
  __int64 j; // r14
  char *v7; // rcx
  char *v8; // rbx

  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 19); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)this + 2);
      v4 = *(AUTOEXPANDALLOCATION **)(v3 + 72 * i + 56);
      if ( v4 )
      {
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v4);
        *(_QWORD *)(v3 + 72 * i + 56) = 0LL;
      }
      v5 = *(OUTPUTDUPL_CONTEXT ***)(v3 + 72 * i + 48);
      if ( v5 )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 2); j = (unsigned int)(j + 1) )
        {
          if ( v5[j] )
          {
            OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v5[j]);
            *(_QWORD *)(*(_QWORD *)(v3 + 72 * i + 48) + 8 * j) = 0LL;
            v5 = *(OUTPUTDUPL_CONTEXT ***)(v3 + 72 * i + 48);
          }
        }
        operator delete(v5);
        *(_QWORD *)(v3 + 72 * i + 48) = 0LL;
      }
    }
    v7 = (char *)*((_QWORD *)this + 2);
    if ( v7 )
    {
      v8 = v7 - 8;
      `vector destructor iterator'(
        v7,
        72LL,
        *((_QWORD *)v7 - 1),
        (void (__fastcall *)(char *))_OUTPUTDUPL_CONTEXTLIST::~_OUTPUTDUPL_CONTEXTLIST);
      operator delete(v8);
    }
    *((_QWORD *)this + 2) = 0LL;
    *((_DWORD *)this + 19) = 0;
  }
}
