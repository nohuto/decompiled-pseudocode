/*
 * XREFs of ?TransferTokens@SfmTokenArray@@QEAAJPEAV1@@Z @ 0x1C0098B40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C0098B70 (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 */

int __fastcall SfmTokenArray::TransferTokens(SfmTokenArray *this, struct SfmTokenArray *a2)
{
  unsigned int v2; // r8d
  int result; // eax

  v2 = *((_DWORD *)a2 + 3);
  result = 0;
  if ( v2 )
  {
    result = SfmTokenArray::AddNotificationTokens(this, *(struct _D3DKMT_PRESENTHISTORYTOKEN **)a2, v2);
    *((_DWORD *)a2 + 3) = 0;
  }
  return result;
}
