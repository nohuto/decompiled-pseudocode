/*
 * XREFs of ?SetViewStateData@ApplicationViewOperation@@UEAAJPEBUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18008D500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetViewStateData(
        ApplicationViewOperation *this,
        const struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0

  result = 0LL;
  *(_OWORD *)((char *)this + 132) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 1);
  v3 = *((_OWORD *)a2 + 2);
  *((_BYTE *)this + 128) = 1;
  *(_OWORD *)((char *)this + 164) = v3;
  return result;
}
