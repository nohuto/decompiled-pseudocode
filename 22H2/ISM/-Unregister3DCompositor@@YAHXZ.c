/*
 * XREFs of ?Unregister3DCompositor@@YAHXZ @ 0x180068D30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18006977C (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ @ 0x1800699FC (-Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ.c)
 */

__int64 Unregister3DCompositor(void)
{
  RTL_SRWLOCK *InstanceOffInputThread; // rax

  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  MPC3DStateHelper::Unregister3DCompositor(InstanceOffInputThread);
  return 1LL;
}
