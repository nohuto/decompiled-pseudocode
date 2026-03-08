/*
 * XREFs of ?AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z @ 0x1800AA748
 * Callers:
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x1800AA62C (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 * Callees:
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x18009C52C (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 */

__int64 __fastcall CResourceTable::AllocateEntryAtHandle(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v8; // rdx

  result = HANDLE_TABLE::AssignEntry((HANDLE_TABLE *)(a1 + 16), a2, a3);
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 40) + *(_DWORD *)(a1 + 24) * a2;
    *a4 = v8;
    *(_QWORD *)(v8 + 8) = 0LL;
  }
  return result;
}
