/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C018C5B0
 * Callers:
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C018C630 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UMPDREF::~UMPDREF(char **this)
{
  char *v2; // rcx
  char *v3; // rdi
  int v4; // eax

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx((int *)v2, 0LL);
    v3 = *this;
    if ( qword_1C02D5F68 )
    {
      if ( (int)qword_1C02D5F68() >= 0 )
      {
        v4 = (int)qword_1C02D5F70;
        if ( qword_1C02D5F70 )
          v4 = qword_1C02D5F70(v3);
        if ( v4 )
        {
          if ( *this )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *this);
        }
      }
    }
  }
}
