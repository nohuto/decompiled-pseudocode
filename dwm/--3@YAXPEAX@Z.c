// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
