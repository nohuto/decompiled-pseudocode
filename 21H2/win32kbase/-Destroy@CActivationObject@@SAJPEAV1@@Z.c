/*
 * XREFs of ?Destroy@CActivationObject@@SAJPEAV1@@Z @ 0x1C0003168
 * Callers:
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0003048 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C0097538 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivationObject::Destroy(struct CActivationObject *a1)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( a1 )
  {
    if ( *((struct _KTHREAD **)a1 + 7) == KeGetCurrentThread() )
    {
      ObfDereferenceObject(a1);
      return 0LL;
    }
    else
    {
      return 3221225506LL;
    }
  }
  return result;
}
