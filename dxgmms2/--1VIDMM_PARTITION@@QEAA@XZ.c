/*
 * XREFs of ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1C0030FB0
 * Callers:
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C003104C (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0012530 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?DeInitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAXPEAUVIDMM_PARTITION@@@Z @ 0x1C00E144C (-DeInitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAXPEAUVIDMM_PARTITION@@@Z.c)
 */

void __fastcall VIDMM_PARTITION::~VIDMM_PARTITION(char **this)
{
  char *v2; // rcx
  char *v3; // rdi
  char *v4; // rcx

  if ( this[5] )
  {
    VIDMM_GLOBAL::DeInitializePartitionForAllAdapters((struct VIDMM_PARTITION *)this);
    v2 = this[5];
    if ( v2 )
    {
      v3 = v2 - 8;
      `vector destructor iterator'(
        v2,
        384LL,
        *((_QWORD *)v2 - 1),
        (void (__fastcall *)(char *))VIDMM_PARTITION_ADAPTER_INFO::~VIDMM_PARTITION_ADAPTER_INFO);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
    }
  }
  v4 = this[3];
  if ( v4 )
    ObfDereferenceObject(v4);
}
