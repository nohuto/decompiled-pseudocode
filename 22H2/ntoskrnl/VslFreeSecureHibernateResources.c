/*
 * XREFs of VslFreeSecureHibernateResources @ 0x1409423D0
 * Callers:
 *     PopFreeHiberContext @ 0x1409886A0 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 37, 0, (__int64)v1);
}
