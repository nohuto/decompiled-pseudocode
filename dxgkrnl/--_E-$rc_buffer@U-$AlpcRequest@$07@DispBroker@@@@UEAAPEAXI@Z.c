/*
 * XREFs of ??_E?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@UEAAPEAXI@Z @ 0x1C0040A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000511C (--1ReferenceCounted@@UEAA@XZ.c)
 */

ReferenceCounted *__fastcall rc_buffer<DispBroker::AlpcRequest<8>>::`vector deleting destructor'(
        ReferenceCounted *P,
        char a2)
{
  ReferenceCounted::~ReferenceCounted(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
