/*
 * XREFs of ??0mutex@std@@QEAA@XZ @ 0x18035FBE0
 * Callers:
 *     ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18011A5FC (--0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

std::mutex *__fastcall std::mutex::mutex(std::mutex *this)
{
  _Mtx_init_in_situ(this, 2);
  return this;
}
