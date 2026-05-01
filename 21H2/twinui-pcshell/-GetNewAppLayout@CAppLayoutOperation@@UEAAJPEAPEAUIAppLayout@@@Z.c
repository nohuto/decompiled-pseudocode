/*
 * XREFs of ?GetNewAppLayout@CAppLayoutOperation@@UEAAJPEAPEAUIAppLayout@@@Z @ 0x1804EE600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppLayoutOperation::GetNewAppLayout(CAppLayoutOperation *this, struct IAppLayout **a2)
{
  return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAppLayout **))this + 4))(
           *((_QWORD *)this + 4),
           &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
           a2);
}
