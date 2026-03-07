__int64 __fastcall MI_GET_NODE_FROM_VALID_PTE(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  return *(unsigned int *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * ((v1 >> 12) & 0xFFFFFFFFFFLL)) >> 4))
                         + 8);
}
