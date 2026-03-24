/*
 * XREFs of ??1CFlipTokenOperation@@MEAA@XZ @ 0x1C006BEEC
 * Callers:
 *     ??_GCFlipTokenOperation@@MEAAPEAXI@Z @ 0x1C006AA40 (--_GCFlipTokenOperation@@MEAAPEAXI@Z.c)
 *     ??_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z @ 0x1C006AA90 (--_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x1C006E9BC (--1CFlipPresentUpdate@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipTokenOperation::~CFlipTokenOperation(CFlipTokenOperation *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &CFlipTokenOperation::`vftable';
  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    ObfDereferenceObject(v1);
}
