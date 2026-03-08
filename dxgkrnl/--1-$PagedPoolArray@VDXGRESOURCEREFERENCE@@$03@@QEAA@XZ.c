/*
 * XREFs of ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C02E1BA0
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C02E4DA8 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01854C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

void __fastcall PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(__int64 a1)
{
  char *v2; // rcx
  char *v3; // rbx
  unsigned int i; // ebx

  v2 = *(char **)a1;
  if ( v2 == (char *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)(*(_QWORD *)a1 + 8LL * i));
  }
  else if ( v2 )
  {
    v3 = v2 - 8;
    `vector destructor iterator'(
      v2,
      8LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
    operator delete(v3);
  }
}
